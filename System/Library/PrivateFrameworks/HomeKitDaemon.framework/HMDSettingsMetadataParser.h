/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDSettingsMetadataParserProtocol.h>

@protocol HMDSettingsControllerDependency;
@class NSString;

@interface HMDSettingsMetadataParser : NSObject <HMFLogging, HMDSettingsMetadataParserProtocol> {

	id<HMDSettingsControllerDependency> _dependency;

}

@property (__weak,readonly) id<HMDSettingsControllerDependency> dependency;              //@synthesize dependency=_dependency - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id<HMDSettingsControllerDependency>)dependency;
-(id)logIdentifier;
-(id)modelsFromMetadata:(id)arg1 ;
-(id)initWithDependency:(id)arg1 ;
@end

