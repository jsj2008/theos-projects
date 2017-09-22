
#import "Activation.h"
 
@implementation Activation

- (id)init {
  [super init];
  self.deviceId = [[[UIDevice currentDevice] identifierForVendor] UUIDString];
  self.deviceOSVersion = [[UIDevice currentDevice] systemVersion];

  [self initRequest];

  return self;
}

- (void)initRequest {
  self.activationURL = [NSURL URLWithString:@"http://i98888jy.bget.ru/activation/"];
  self.activationRequest = [NSMutableURLRequest requestWithURL:self.activationURL];
  [self.activationRequest addValue:self.deviceId forHTTPHeaderField:@"DEVICE-ID"];
  [self.activationRequest addValue:self.deviceOSVersion forHTTPHeaderField:@"DEVICE-OS-VERSION"];
}
 
- (void)checkActivation:(NSString*)key {
  [self.activationRequest addValue:key forHTTPHeaderField:@"ACTIVATION-KEY"];
  NSOperationQueue *queue = [[NSOperationQueue alloc] init];
  [NSURLConnection sendAsynchronousRequest:self.activationRequest queue:queue completionHandler:^(NSURLResponse *response, NSData *data, NSError *error) {
    if (error) {}
    else {
      NSHTTPURLResponse* httpResponse = (NSHTTPURLResponse*)response;
      int code = [httpResponse statusCode];
      if (code != 200) {
        dispatch_async(dispatch_get_main_queue(), ^{
          UIAlertView *alert = [[UIAlertView alloc] initWithTitle:@"DEFENDER ACTIVE"
                                message:@"Suck my dick!"
                                delegate:self
                                cancelButtonTitle:@"OHH SHIT!"
                                otherButtonTitles:@"I Am Slavik Nychkalo", nil];
          [alert show];
          [alert release];
        });
      }
    }
  }];
}

- (void)alertView:(UIAlertView *)alertView clickedButtonAtIndex:(NSInteger)buttonIndex{
    if (buttonIndex == [alertView cancelButtonIndex]) {
      NSUserDefaults *userDefaults = [NSUserDefaults standardUserDefaults];
      [userDefaults setObject:nil forKey:@"activationKey"];
      exit(0);
    } else {}
}

@end


