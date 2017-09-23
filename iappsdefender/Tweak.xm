#import <UIKit/UIKit.h>

#import "Activation/Activation.h"
#import "Activation/ActivationKeyAlert.h"



%hook AppDelegate
-(BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2
{
  BOOL result = %orig(arg1, arg2);

  UIWindow *window=[UIApplication sharedApplication].keyWindow;
  UIViewController *root = [window rootViewController];

  ActivationKeyAlert* activation = [[ActivationKeyAlert alloc] init];
  [activation show:root];

  return result;
}
%end


%hook YTAppDelegate
-(BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2
{
  BOOL result = %orig(arg1, arg2);

  UIWindow *window=[UIApplication sharedApplication].keyWindow;
  UIViewController *root = [window rootViewController];

  ActivationKeyAlert* activation = [[ActivationKeyAlert alloc] init];
  [activation show:root];

  return result;
}
%end


%hook DZRAppDelegate
-(BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2
{
  BOOL result = %orig(arg1, arg2);

  UIWindow *window=[UIApplication sharedApplication].keyWindow;
  UIViewController *root = [window rootViewController];

  ActivationKeyAlert* activation = [[ActivationKeyAlert alloc] init];
  [activation show:root];

  return result;
}
%end