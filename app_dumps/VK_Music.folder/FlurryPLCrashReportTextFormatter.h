/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "FlurryPLCrashReportFormatter.h"


@interface FlurryPLCrashReportTextFormatter : XXUnknownSuperclass <FlurryPLCrashReportFormatter> {
	int _textFormat;
	unsigned _stringEncoding;
}
+(id)stringValueForCrashReport:(id)crashReport withTextFormat:(int)textFormat;
+(id)formatStackFrame:(id)frame frameIndex:(unsigned)index report:(id)report lp64:(BOOL)a64;
-(id)formatReport:(id)report error:(id*)error;
-(id)initWithTextFormat:(int)textFormat stringEncoding:(unsigned)encoding;
@end

