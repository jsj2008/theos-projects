/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface FlurryProtocolData : XXUnknownSuperclass {
}
+(int)getInt32FromData:(id)data atIndex:(int)index;
+(short)getInt16FromData:(id)data atIndex:(int)index;
+(void)appendLargeData:(id)data toData:(id)data2;
+(void)appendShortData:(id)data toData:(id)data2;
+(void)appendTinyData:(id)data toData:(id)data2;
+(void)appendStringUnlimited:(id)unlimited toData:(id)data;
+(void)appendString:(id)string toData:(id)data;
+(void)appendTimestamp:(id)timestamp toData:(id)data;
+(void)appendDouble:(double)aDouble toData:(id)data;
+(void)appendFloat:(float)aFloat toData:(id)data;
+(void)appendLong:(long long)aLong toData:(id)data;
+(void)appendInt:(int)int toData:(id)data;
+(void)appendUshort:(unsigned short)ushort toData:(id)data;
+(void)appendByte:(BOOL)byte toData:(id)data;
+(void)appendBoolean:(BOOL)boolean toData:(id)data;
+(id)limitStringLength:(id)length;
+(long long)timeIntervalFrom:(id)from to:(id)to;
@end

