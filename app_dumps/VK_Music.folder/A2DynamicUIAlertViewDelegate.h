/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "A2DynamicDelegate.h"
#import "UIAlertViewDelegate.h"

@class NSString;

@interface A2DynamicUIAlertViewDelegate : A2DynamicDelegate <UIAlertViewDelegate> {
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)alertView:(id)view didDismissWithButtonIndex:(int)buttonIndex;
-(void)alertView:(id)view willDismissWithButtonIndex:(int)buttonIndex;
-(void)didPresentAlertView:(id)view;
-(void)willPresentAlertView:(id)view;
-(void)alertViewCancel:(id)cancel;
-(BOOL)alertViewShouldEnableFirstOtherButton:(id)alertView;
@end

