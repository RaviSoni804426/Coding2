# class vehical:
#     def display():
#         print("I am a vehical")
# class Car(vehical):
#     def m():
#         print("I am a car") 
#         super().Car()  
# c=Car ()
# c.m()
# c.display()
# c.Car()

# class shape():
#     def __init__(self,sides):
#         self.sides()
#     def get_no_sides(self):
#         return self.sides()
# class square(shapes):
#     def __init__(self,side):

# class Bank_account():
#     def __init__(self,title,accno):
#         self.__title = title
#         self.__accno = accno
#         self.__balance=0
#         self.withdraw=withdraw
#         self.deposite=deposit
#     def get_title(self):
#         return self.__title
#     def get_balance(self):
#         return self.__balance
#     class Current_Account(Bank_account):
#         def __init__(self,balance=0,interest=0):
#          self.interest = interest
#         super().get__balance()
#     class Saving_Account(Bank_account):
#         def __init__(self,title,accno,interest):
#             self.__interest=interest
#             super().__init__(title,accno)
#         def__deposite(self,amount)
#         self.balance=amount*interest/100+amount
#         super().__deposite(amount)
#     c=Current_Account()
#     s=Saving_Account()
#     def get__balance(c):
#         return self.balance
#     def  set__balance(c): 
#         self.balance = balance

class BankAccount:
    def __init__(self, title,account_number, balance=0, interest_rate=0):
        self.account_number = account_number
        self.balance = balance
        self.interest_rate = interest_rate
        self.__title=title

    def deposit(self, amount):
        if amount > 0:
            self.balance += amount
            return True
        else:
            return False

    def withdraw(self, amount):
        if amount > 0 and amount <= self.balance:
            self.balance -= amount
            return True
        else:
            return False

    def calculate_interest(self):
        interest = self.balance * (self.interest_rate / 100)
        self.balance += interest
        return interest

    def get_balance(self):
        return self.balance
account = BankAccount("ravi","1234567890", 1000, 2)

# Deposit
deposit_amount =int(input("Enter deposite amount: "))
if account.deposit(deposit_amount):
    print(f"Deposited {deposit_amount} successfully.")
else:
    print("Deposit amount should be greater than 0.")

# Withdraw
withdraw_amount =int(input("Enter withdraw amount: "))
if account.withdraw(withdraw_amount):
    print(f"Withdrew {withdraw_amount} successfully.")
else:
    print("Withdraw amount should be greater than 0 and less than or equal to account balance.")

# Calculate interest
interest = account.calculate_interest()
print(f"Interest earned: {interest}")

# Get balance
balance = account.get_balance()
print(f"Current balance: {balance}")