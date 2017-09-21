/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "VKClient-Structs.h"

@class UIView, NSArray, NSMutableArray, EditAttachmentStyle, AttachmentsContainer;

__attribute__((visibility("hidden")))
@interface AttachmentsLayout : XXUnknownSuperclass {
	BOOL skipUpdate;
	AttachmentsContainer* _container;
	EditAttachmentStyle* _style;
	UIView* _view;
	NSMutableArray* _attachmentViews;
	NSArray* _extraViews;
}
@property(retain, nonatomic) NSArray* extraViews;
@property(retain, nonatomic) NSMutableArray* attachmentViews;
@property(retain, nonatomic) UIView* view;
@property(readonly, assign, nonatomic) EditAttachmentStyle* style;
@property(readonly, retain, nonatomic) AttachmentsContainer* container;
-(void).cxx_destruct;
-(CGSize)layoutSize;
-(void)animateAttachments:(id)attachments;
-(void)alignAttachments:(id)attachments;
-(int)indexForPoint:(CGPoint)point;
-(void)gestureLongPress:(id)press;
-(BOOL)checkCanAdd;
-(void)updateLayout;
-(void)resetLayout;
-(void)updateLayoutAnimated:(BOOL)animated delay:(double)delay animate:(id)animate completion:(id)completion;
-(void)change:(id)change animated:(BOOL)animated delay:(double)delay animate:(id)animate completion:(id)completion;
-(void)useExtraViews:(id)views;
-(void)notificationViewDelete:(id)aDelete;
-(void)notificationUpdated:(id)updated;
-(void)dealloc;
-(id)initWithContainer:(id)container style:(id)style;
@end
