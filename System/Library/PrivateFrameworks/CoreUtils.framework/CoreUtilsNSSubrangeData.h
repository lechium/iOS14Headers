/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUtils/CoreUtils-Structs.h>
#import <CoreFoundation/NSData.h>

@class NSData;

@interface CoreUtilsNSSubrangeData : NSData {

	NSData* _data;
	NSRange _range;

}
-(void)getBytes:(void*)arg1 range:(NSRange)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 range:(NSRange)arg2 ;
-(const void*)bytes;
-(void)dealloc;
-(unsigned long long)length;
-(id)init;
-(void)getBytes:(void*)arg1 length:(unsigned long long)arg2 ;
-(void)getBytes:(void*)arg1 ;
-(BOOL)_isCompact;
@end
