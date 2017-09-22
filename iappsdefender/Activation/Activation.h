@interface Activation : NSObject

@property (nonatomic, retain) NSURL *activationURL;
@property (nonatomic, retain) NSMutableURLRequest *activationRequest;

@property (nonatomic, retain) NSString *deviceId;
@property (nonatomic, retain) NSString *deviceOSVersion;

- (id)init;
- (void)checkActivation:(NSString*)key;
- (void)initRequest;
- (void)alertView:(UIAlertView *)alertView clickedButtonAtIndex:(NSInteger)buttonIndex;

@end