/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:58:17 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <libobjc.A.dylib/SGEntityKey.h>

@class NSString;

@interface SGMessageKey : NSObject <SGEntityKey> {

	NSString* _uniqueIdentifier;
	NSString* _source;

}

@property (nonatomic,readonly) NSString * uniqueIdentifier;              //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * source;                        //@synthesize source=_source - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isSupportedEntityType:(long long)arg1 ;
-(id)serialize;
-(id)initWithSerialized:(id)arg1 ;
-(id)init;
-(NSString *)uniqueIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)source;
-(unsigned long long)hash;
-(NSString *)description;
-(id)initWithSource:(id)arg1 uniqueIdentifier:(id)arg2 ;
-(BOOL)isEqualToMessageKey:(id)arg1 ;
@end

