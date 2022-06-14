.PHONY: clean All

All:
	@echo "----------Building project:[ MultiDimensional_Array - Debug ]----------"
	@cd "MultiDimensional_Array" && "$(MAKE)" -f  "MultiDimensional_Array.mk"
clean:
	@echo "----------Cleaning project:[ MultiDimensional_Array - Debug ]----------"
	@cd "MultiDimensional_Array" && "$(MAKE)" -f  "MultiDimensional_Array.mk" clean
