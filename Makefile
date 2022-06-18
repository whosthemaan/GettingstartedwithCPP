.PHONY: clean All

All:
	@echo "----------Building project:[ Statements - Debug ]----------"
	@cd "Statements" && "$(MAKE)" -f  "Statements.mk"
clean:
	@echo "----------Cleaning project:[ Statements - Debug ]----------"
	@cd "Statements" && "$(MAKE)" -f  "Statements.mk" clean
