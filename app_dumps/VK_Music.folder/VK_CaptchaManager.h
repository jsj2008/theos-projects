/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "UIGestureRecognizerDelegate.h"

@class NSMutableOrderedSet, VKCaptchaViewController, VK_CaptchaHandlerError, NSString;

__attribute__((visibility("hidden")))
@interface VK_CaptchaManager : XXUnknownSuperclass <UIGestureRecognizerDelegate> {
	NSMutableOrderedSet* _captchaErrors;
	VKCaptchaViewController* _captchaViewController;
	VK_CaptchaHandlerError* _captchaHandlerError;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) __weak VK_CaptchaHandlerError* captchaHandlerError;
@property(assign, nonatomic) __weak VKCaptchaViewController* captchaViewController;
@property(retain, nonatomic) NSMutableOrderedSet* captchaErrors;
-(void).cxx_destruct;
-(BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
-(void)showNextCaptchaIfNeeded;
-(void)dismissCaptchaController;
-(void)showCaptchaWithError:(id)error;
-(void)configure;
-(void)showCaptchaWithUrl:(id)url sig:(id)sig andCompletionBlock:(id)block;
-(id)init;
@end

