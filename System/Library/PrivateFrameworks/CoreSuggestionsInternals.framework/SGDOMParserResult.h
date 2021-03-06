/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:58:18 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface SGDOMParserResult : NSObject <NSSecureCoding> {

	NSString* _plainText;
	NSArray* _taggedCharacterRanges;

}

@property (nonatomic,readonly) NSString * plainText;                         //@synthesize plainText=_plainText - In the implementation block
@property (nonatomic,readonly) NSArray * taggedCharacterRanges;              //@synthesize taggedCharacterRanges=_taggedCharacterRanges - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)taggedCharacterRanges;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)plainText;
-(id)initWithPlainText:(id)arg1 taggedCharacterRanges:(id)arg2 ;
-(void)insertSubject:(id)arg1 ;
-(BOOL)isEqualToDOMParserResult:(id)arg1 ;
@end

