price=1000000
has_down_credit=False
if has_down_credit:
    down_payment=0.1*price

else:
    down_payment=0.2*price
print(f"down payment is ${down_payment}")