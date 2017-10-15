#import <UIKit/UIKit.h>

#import "Activation/Activation.h"
#import "Activation/ActivationKeyAlert.h"



%hook AppDelegate
-(BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2
{
  BOOL result = %orig(arg1, arg2);

<<<<<<< HEAD
  // dispatch_async(dispatch_get_main_queue(), ^{
    UIWindow *window=[UIApplication sharedApplication].keyWindow;
    UIViewController *root = [window rootViewController];
    ActivationKeyAlert* activation = [[ActivationKeyAlert alloc] init];
    [activation show:root];
  // });
=======

  dispatch_async(dispatch_get_main_queue(), ^{
    UIWindow *window=[UIApplication sharedApplication].keyWindow;
    UIViewController *root = [window rootViewController];

    ActivationKeyAlert* activation = [[ActivationKeyAlert alloc] init];
    [activation show:root];
  });
>>>>>>> 2afe2f761bee32c168ba84f4daf22a597401c02a

  return result;
}
%end


%hook YTAppDelegate
-(BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2
{
  BOOL result = %orig(arg1, arg2);

<<<<<<< HEAD
  // dispatch_async(dispatch_get_main_queue(), ^{
    UIWindow *window=[UIApplication sharedApplication].keyWindow;
    UIViewController *root = [window rootViewController];
    ActivationKeyAlert* activation = [[ActivationKeyAlert alloc] init];
    [activation show:root];
  // });
=======

  dispatch_async(dispatch_get_main_queue(), ^{
    UIWindow *window=[UIApplication sharedApplication].keyWindow;
    UIViewController *root = [window rootViewController];

    ActivationKeyAlert* activation = [[ActivationKeyAlert alloc] init];
    [activation show:root];
  });
>>>>>>> 2afe2f761bee32c168ba84f4daf22a597401c02a

  return result;
}
%end


%hook DZRAppDelegate
-(BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2
{
  BOOL result = %orig(arg1, arg2);

<<<<<<< HEAD
  // dispatch_async(dispatch_get_main_queue(), ^{
    UIWindow *window=[UIApplication sharedApplication].keyWindow;
    UIViewController *root = [window rootViewController];
    ActivationKeyAlert* activation = [[ActivationKeyAlert alloc] init];
    [activation show:root];
  // });
=======
  
  dispatch_async(dispatch_get_main_queue(), ^{
    UIWindow *window=[UIApplication sharedApplication].keyWindow;
    UIViewController *root = [window rootViewController];

    ActivationKeyAlert* activation = [[ActivationKeyAlert alloc] init];
    [activation show:root];
  });
>>>>>>> 2afe2f761bee32c168ba84f4daf22a597401c02a

  return result;
}
%end


<<<<<<< HEAD
%hook DZREmptyAppDelegate
-(BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2
{
  BOOL result = %orig(arg1, arg2);

  // dispatch_async(dispatch_get_main_queue(), ^{
    UIWindow *window=[UIApplication sharedApplication].keyWindow;
    UIViewController *root = [window rootViewController];
    ActivationKeyAlert* activation = [[ActivationKeyAlert alloc] init];
    [activation show:root];
  // });
=======
// ZVOOQ
%hook ZVQAppDelegate
-(BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2
{
  BOOL result = %orig(arg1, arg2);

  
  dispatch_async(dispatch_get_main_queue(), ^{
    UIWindow *window=[UIApplication sharedApplication].keyWindow;
    UIViewController *root = [window rootViewController];

    ActivationKeyAlert* activation = [[ActivationKeyAlert alloc] init];
    [activation show:root];
  });
>>>>>>> 2afe2f761bee32c168ba84f4daf22a597401c02a

  return result;
}
%end