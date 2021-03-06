/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "StoryEditorItem.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIImage, AVAsset, NSString;

__attribute__((visibility("hidden")))
@interface StoryEditorItemVideo : XXUnknownSuperclass <StoryEditorItem> {
	AVAsset* _asset;
	UIImage* _placeholderImage;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) UIImage* placeholderImage;
@property(readonly, assign, nonatomic) AVAsset* asset;
-(void).cxx_destruct;
-(BOOL)muteSupported;
-(BOOL)musicSupported;
-(BOOL)drawingSupported;
-(BOOL)textAttachmentsSupported;
-(BOOL)stickersAttachmentsSupported;
-(id)initWithAsset:(id)asset;
@end

