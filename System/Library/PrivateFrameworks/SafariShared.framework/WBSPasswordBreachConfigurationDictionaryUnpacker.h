/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface WBSPasswordBreachConfigurationDictionaryUnpacker : NSObject {

	NSDictionary* _dictionary;
	BOOL _errorOccurred;

}

@property (nonatomic,readonly) BOOL errorOccurred;              //@synthesize errorOccurred=_errorOccurred - In the implementation block
-(id)stringForKey:(id)arg1 minimumLength:(unsigned long long)arg2 ;
-(id)URLForKey:(id)arg1 ;
-(unsigned long long)unsignedIntegerForKey:(id)arg1 minimumValue:(unsigned long long)arg2 maximumValue:(unsigned long long)arg3 ;
-(BOOL)optionalBoolForKey:(id)arg1 defaultValue:(BOOL)arg2 ;
-(BOOL)errorOccurred;
-(id)_valueOfClass:(Class)arg1 forKey:(id)arg2 required:(BOOL)arg3 ;
-(id)sortedUnsignedIntegerArrayForKey:(id)arg1 minimumValue:(unsigned long long)arg2 maximumValue:(unsigned long long)arg3 ascending:(BOOL)arg4 ;
-(id)dataFromHexStringForKey:(id)arg1 expectedLength:(id)arg2 ;
-(id)initWithDictionary:(id)arg1 ;
@end
