/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVFCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVTextStyleRuleInternal, NSDictionary, NSString;

@interface AVTextStyleRule : NSObject <NSCopying> {

	AVTextStyleRuleInternal* _textStyleRule;

}

@property (nonatomic,readonly) NSDictionary * textMarkupAttributes; 
@property (nonatomic,readonly) NSString * textSelector; 
+(id)textStyleRuleWithTextMarkupAttributes:(id)arg1 textSelector:(id)arg2 ;
+(id)textStyleRulesFromPropertyList:(id)arg1 ;
+(id)textStyleRuleWithTextMarkupAttributes:(id)arg1 ;
+(id)propertyListForTextStyleRules:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(NSString *)textSelector;
-(id)init;
-(NSDictionary *)textMarkupAttributes;
-(id)_dictionaryPlistRepresentation;
-(id)initWithTextMarkupAttributes:(id)arg1 textSelector:(id)arg2 ;
-(id)initWithTextMarkupAttributes:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end
