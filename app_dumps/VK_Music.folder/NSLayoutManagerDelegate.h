/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"
#import "VK_Music-Structs.h"


@protocol NSLayoutManagerDelegate <NSObject>
@optional
-(void)layoutManager:(id)manager textContainer:(id)container didChangeGeometryFromSize:(CGSize)size;
-(void)layoutManager:(id)manager didCompleteLayoutForTextContainer:(id)textContainer atEnd:(BOOL)end;
-(void)layoutManagerDidInvalidateLayout:(id)layoutManager;
-(BOOL)layoutManager:(id)manager shouldSetLineFragmentRect:(inout CGRect*)rect lineFragmentUsedRect:(inout CGRect*)rect3 baselineOffset:(inout float*)offset inTextContainer:(id)textContainer forGlyphRange:(NSRange)glyphRange;
-(CGRect)layoutManager:(id)manager boundingBoxForControlGlyphAtIndex:(unsigned)index forTextContainer:(id)textContainer proposedLineFragment:(CGRect)fragment glyphPosition:(CGPoint)position characterIndex:(unsigned)index6;
-(BOOL)layoutManager:(id)manager shouldBreakLineByHyphenatingBeforeCharacterAtIndex:(unsigned)index;
-(BOOL)layoutManager:(id)manager shouldBreakLineByWordBeforeCharacterAtIndex:(unsigned)index;
-(int)layoutManager:(id)manager shouldUseAction:(int)action forControlCharacterAtIndex:(unsigned)index;
-(float)layoutManager:(id)manager paragraphSpacingAfterGlyphAtIndex:(unsigned)index withProposedLineFragmentRect:(CGRect)proposedLineFragmentRect;
-(float)layoutManager:(id)manager paragraphSpacingBeforeGlyphAtIndex:(unsigned)index withProposedLineFragmentRect:(CGRect)proposedLineFragmentRect;
-(float)layoutManager:(id)manager lineSpacingAfterGlyphAtIndex:(unsigned)index withProposedLineFragmentRect:(CGRect)proposedLineFragmentRect;
-(unsigned)layoutManager:(id)manager shouldGenerateGlyphs:(const unsigned short*)glyphs properties:(const int*)properties characterIndexes:(const unsigned*)indexes font:(id)font forGlyphRange:(NSRange)glyphRange;
@end

