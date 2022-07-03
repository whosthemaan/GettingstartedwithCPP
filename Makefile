.PHONY: clean All

All:
	@echo "----------Building project:[ functions_2 - Debug ]----------"
	@cd "functions_2" && "$(MAKE)" -f  "functions_2.mk"
clean:
	@echo "----------Cleaning project:[ functions_2 - Debug ]----------"
	@cd "functions_2" && "$(MAKE)" -f  "functions_2.mk" clean
