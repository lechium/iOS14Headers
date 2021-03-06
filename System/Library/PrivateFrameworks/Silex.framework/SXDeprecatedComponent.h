/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, SXComponentClassification;

@interface SXDeprecatedComponent : NSObject {

	NSString* _typeString;
	SXComponentClassification* _replacementClassification;

}

@property (nonatomic,readonly) NSString * typeString;                                              //@synthesize typeString=_typeString - In the implementation block
@property (nonatomic,readonly) SXComponentClassification * replacementClassification;              //@synthesize replacementClassification=_replacementClassification - In the implementation block
+(id)deprecatedComponentWithType:(id)arg1 withReplacementClassificationClass:(Class)arg2 ;
-(NSString *)typeString;
-(SXComponentClassification *)replacementClassification;
-(id)initWithType:(id)arg1 withReplacementClassification:(Class)arg2 ;
@end

