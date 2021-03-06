/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/SXComponent.h>
#import <libobjc.A.dylib/SXComponentAdvertisingMetadataProviding.h>

@class NSString, SXJSONDictionary;

@interface SXVideoComponent : SXComponent <SXComponentAdvertisingMetadataProviding>

@property (nonatomic,readonly) NSString * stillImageIdentifier; 
@property (nonatomic,readonly) NSString * resourceIdentifier; 
@property (nonatomic,readonly) double aspectRatio; 
@property (nonatomic,readonly) NSString * caption; 
@property (nonatomic,readonly) NSString * accessibilityCaption; 
@property (nonatomic,readonly) BOOL enablePreroll; 
@property (nonatomic,readonly) NSString * prerollPlacementIdentifier; 
@property (nonatomic,readonly) SXJSONDictionary * advertising; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)typeString;
-(SXJSONDictionary *)advertising;
-(NSString *)prerollPlacementIdentifier;
-(BOOL)enablePreroll;
-(NSString *)accessibilityCaption;
-(NSString *)caption;
-(double)aspectRatio;
-(NSString *)resourceIdentifier;
-(NSString *)stillImageIdentifier;
-(unsigned long long)traits;
-(id)initWithJSONObject:(id)arg1 andVersion:(id)arg2 ;
-(double)aspectRatioWithValue:(id)arg1 withType:(int)arg2 ;
-(BOOL)enablePrerollWithValue:(id)arg1 withType:(int)arg2 ;
@end

