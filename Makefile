.PHONY: clean All

All:
	@echo "----------Building project:[ Nestedloopsum - Debug ]----------"
	@cd "Nestedloopsum" && "$(MAKE)" -f  "Nestedloopsum.mk"
clean:
	@echo "----------Cleaning project:[ Nestedloopsum - Debug ]----------"
	@cd "Nestedloopsum" && "$(MAKE)" -f  "Nestedloopsum.mk" clean
