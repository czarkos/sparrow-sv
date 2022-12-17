MODULE = sprw_module
MAIN = sim_main
PACKAGE = sparrow

# other flags for later
# -Wall
#  --x-assign unique
#  --x-initial unique
VFLAGS = -Wno-UNOPTFLAT --trace --x-assign unique --x-initial unique --cc

sim: waveform.vcd

build: ./obj_dir/V$(PACKAGE)

verilate: .stamp.verilate

.PHONY:waves
waves: waveform.vcd
	@echo
	@echo '### WAVES ###'
	gtkwave waveform.vcd

waveform.vcd: ./obj_dir/V$(PACKAGE)
	@echo
	@echo '### SIMULATING ###'
	./obj_dir/V$(PACKAGE) +verilator+rand+reset+2

.PHONY:./obj_dir/V$(PACKAGE)
./obj_dir/V$(PACKAGE): .stamp.verilate
	@echo
	@echo '### BUILDING SIM ###'
	make -C obj_dir/ -f V$(PACKAGE).mk V$(PACKAGE)

.PHONY:.stamp.verilate
.stamp.verilate: src/$(PACKAGE).sv src/$(MODULE).sv src/lpmul.sv $(MAIN).cpp
	@echo
	@echo '### VERILATING ###'
	verilator $(VFLAGS) src/$(PACKAGE).sv src/wrapper.sv src/$(MODULE).sv src/lpmul.sv --exe $(MAIN).cpp
	@touch .stamp.verilate

.PHONY:run
run:
	obj_dir/V$(PACKAGE)

.PHONY:lint
lint:
	verilator -Wno-UNOPTFLAT -lint-only src/$(PACKAGE).sv src/$(MODULE).sv src/lpmul.sv

.PHONY:clean
clean:
	rm -rf .stamp.verilate
	rm -rf ./obj_dir/
	rm -rf waveform.vcd
