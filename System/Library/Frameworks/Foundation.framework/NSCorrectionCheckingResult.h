/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSSubstitutionCheckingResult.h>

@class NSArray;

@interface NSCorrectionCheckingResult : NSSubstitutionCheckingResult {

	NSArray* _alternativeStrings;

}
+(BOOL)supportsSecureCoding;
-(unsigned long long)resultType;
-(id)initWithRange:(NSRange)arg1 replacementString:(id)arg2 alternativeStrings:(id)arg3 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)resultByAdjustingRangesWithOffset:(long long)arg1 ;
-(id)alternativeStrings;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
@end
