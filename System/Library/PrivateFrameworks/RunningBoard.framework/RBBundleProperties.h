/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSURL, NSDictionary;


@protocol RBBundleProperties <RBSProcessBundleDataSource>
@property (nonatomic,copy,readonly) NSString * bundleIdentifier; 
@property (nonatomic,copy,readonly) NSString * bundlePath; 
@property (nonatomic,copy,readonly) NSString * executablePath; 
@property (nonatomic,copy,readonly) NSString * extensionPointIdentifier; 
@property (nonatomic,readonly) NSURL * dataContainerURL; 
@property (nonatomic,readonly) NSDictionary * environmentVariables; 
@property (nonatomic,readonly) BOOL supportsBackgroundContentFetching; 
@property (nonatomic,readonly) BOOL supportsBackgroundNetworkAuthentication; 
@property (nonatomic,readonly) BOOL supportsBackgroundAudio; 
@property (nonatomic,readonly) BOOL supportsUnboundedTaskCompletion; 
@property (nonatomic,readonly) BOOL usesSocketMonitoring; 
@property (getter=isBackgroundRefreshEnabled,nonatomic,readonly) BOOL backgroundRefreshEnabled; 
@property (nonatomic,readonly) int preferredJetsamBand; 
@property (nonatomic,readonly) BOOL hasPreferredJetsamBand; 
@property (nonatomic,readonly) BOOL isExtension; 
@property (nonatomic,readonly) int platform; 
@required
-(BOOL)supportsBackgroundContentFetching;
-(id)bundleInfoValuesForKeys:(id)arg1;
-(NSString *)extensionPointIdentifier;
-(NSString *)bundlePath;
-(NSURL *)dataContainerURL;
-(NSString *)executablePath;
-(NSString *)bundleIdentifier;
-(BOOL)supportsUnboundedTaskCompletion;
-(BOOL)supportsBackgroundAudio;
-(NSDictionary *)environmentVariables;
-(BOOL)hasPreferredJetsamBand;
-(BOOL)isBackgroundRefreshEnabled;
-(int)preferredJetsamBand;
-(BOOL)supportsBackgroundNetworkAuthentication;
-(BOOL)isExtension;
-(int)platform;
-(BOOL)usesSocketMonitoring;

@end

