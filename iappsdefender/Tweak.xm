#import <UIKit/UIKit.h>

#import "Activation/Activation.h"
#import "Activation/ActivationKeyAlert.h"


// // Other apps
// %hook AppDelegate
// -(BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2
// {
//   BOOL result = %orig(arg1, arg2);

//   dispatch_async(dispatch_get_main_queue(), ^{
//     UIWindow *window=[UIApplication sharedApplication].keyWindow;
//     UIViewController *root = [window rootViewController];

//     ActivationKeyAlert* activation = [[ActivationKeyAlert alloc] init];
//     [activation show:root];
//   });

//   return result;
// }
// %end


// // YouTube
// %hook YTAppDelegate
// -(BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2
// {
//   BOOL result = %orig(arg1, arg2);

//   dispatch_async(dispatch_get_main_queue(), ^{
//     UIWindow *window=[UIApplication sharedApplication].keyWindow;
//     UIViewController *root = [window rootViewController];

//     ActivationKeyAlert* activation = [[ActivationKeyAlert alloc] init];
//     [activation show:root];
//   });

//   return result;
// }
// %end


// // Deezer
// %hook DZRAppDelegate
// -(BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2
// {
//   BOOL result = %orig(arg1, arg2);
  
//   dispatch_async(dispatch_get_main_queue(), ^{
//     UIWindow *window=[UIApplication sharedApplication].keyWindow;
//     UIViewController *root = [window rootViewController];

//     ActivationKeyAlert* activation = [[ActivationKeyAlert alloc] init];
//     [activation show:root];
//   });

//   return result;
// }
// %end



// // ZVOOQ
// %hook ZVQAppDelegate
// -(BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2
// {
//   BOOL result = %orig(arg1, arg2);
  
//   dispatch_async(dispatch_get_main_queue(), ^{
//     UIWindow *window=[UIApplication sharedApplication].keyWindow;
//     UIViewController *root = [window rootViewController];

//     ActivationKeyAlert* activation = [[ActivationKeyAlert alloc] init];
//     [activation show:root];
//   });

//   return result;
// }
// %end

%ctor {
  dispatch_async(dispatch_get_main_queue(), ^{
    UIWindow *window=[UIApplication sharedApplication].keyWindow;
    UIViewController *root = [window rootViewController];

    ActivationKeyAlert* activation = [[ActivationKeyAlert alloc] init];
    [activation show:root];
  });
}