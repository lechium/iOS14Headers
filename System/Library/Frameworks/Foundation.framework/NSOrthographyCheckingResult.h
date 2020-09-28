/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSTextCheckingResult.h>

@class NSOrthography;

@interface NSOrthographyCheckingResult : NSTextCheckingResult {

	NSRange _range;
	NSOrthography* _orthography;

}
+(BOOL)supportsSecureCoding;
-(NSRange)range;
-(unsigned long long)resultType;
-(void)dealloc;
-(id)orthography;
-(id)initWithRange:(NSRange)arg1 orthography:(id)arg2 ;
-(BOOL)_adjustRangesWithOffset:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)resultByAdjustingRangesWithOffset:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
@end
