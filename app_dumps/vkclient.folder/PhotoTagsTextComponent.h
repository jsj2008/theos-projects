/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Component5.h"

@class ThumbnailComponent, TextComponentInteractive;

__attribute__((visibility("hidden")))
@interface PhotoTagsTextComponent : Component5 {
	ThumbnailComponent* _thumbnailComponent;
	TextComponentInteractive* _textComponent;
}
@property(retain, nonatomic) ThumbnailComponent* thumbnailComponent;
@property(retain, nonatomic) TextComponentInteractive* textComponent;
+(id)photoTags:(id)tags;
-(void).cxx_destruct;
-(id)nodeForState:(id)state context:(id)context;
@end
