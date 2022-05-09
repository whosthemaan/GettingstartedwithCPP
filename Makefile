.PHONY: clean All

All:
	@echo "----------Building project:[ Shipping_cost_calculator - Debug ]----------"
	@cd "Shipping_cost_calculator" && "$(MAKE)" -f  "Shipping_cost_calculator.mk"
clean:
	@echo "----------Cleaning project:[ Shipping_cost_calculator - Debug ]----------"
	@cd "Shipping_cost_calculator" && "$(MAKE)" -f  "Shipping_cost_calculator.mk" clean
