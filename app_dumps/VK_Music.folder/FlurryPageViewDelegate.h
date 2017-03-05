/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "UITabBarControllerDelegate.h"
#import "UITableViewDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "VK_Music-Structs.h"

@class NSString;

@interface FlurryPageViewDelegate : XXUnknownSuperclass <UINavigationControllerDelegate, UITabBarControllerDelegate, UITableViewDelegate> {
	id<NSObject> _delegate;
	id _target;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) id target;
@property(assign, nonatomic) __weak id<NSObject> delegate;
+(void)destroyDelegateOnTarget:(id)target;
+(void)createDelegateOnTarget:(id)target;
+(id)createInvocationOnSelector:(SEL)selector target:(id)target;
-(void).cxx_destruct;
-(void)tabBarController:(id)controller didEndCustomizingViewControllers:(id)controllers changed:(BOOL)changed;
-(void)tabBarController:(id)controller willEndCustomizingViewControllers:(id)controllers changed:(BOOL)changed;
-(void)tabBarController:(id)controller willBeginCustomizingViewControllers:(id)controllers;
-(void)tabBarController:(id)controller didSelectViewController:(id)controller2;
-(BOOL)tabBarController:(id)controller shouldSelectViewController:(id)controller2;
-(void)navigationController:(id)controller willShowViewController:(id)controller2 animated:(BOOL)animated;
-(void)navigationController:(id)controller didShowViewController:(id)controller2 animated:(BOOL)animated;
-(void)dealloc;
-(id)initWithTarget:(id)target;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
@end

