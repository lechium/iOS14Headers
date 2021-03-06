/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:05 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/REAutomaticExportedInterface.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, REFeatureMap;

@interface REMLElement : NSObject <REAutomaticExportedInterface, NSCopying> {

	NSString* _identifier;
	REFeatureMap* _featureMap;

}

@property (nonatomic,readonly) NSString * identifier;                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) REFeatureMap * featureMap;              //@synthesize featureMap=_featureMap - In the implementation block
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(REFeatureMap *)featureMap;
-(id)initWithIdentifier:(id)arg1 featureMap:(id)arg2 ;
@end

