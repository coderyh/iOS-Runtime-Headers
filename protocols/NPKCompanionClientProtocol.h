/* Generated by RuntimeBrowser.
 */

@protocol NPKCompanionClientProtocol <NSObject>

@required

- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didEnableTransactionService:(BOOL)arg2;
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didReceiveTransaction:(PKPaymentTransaction *)arg2;
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didRemoveTransactionWithIdentifier:(NSString *)arg2;

@end
