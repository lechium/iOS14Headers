/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:05 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, RERelevanceEngineConfiguration, REFeatureSet, NSArray, RELiveElementCoordinator, REDataSourceManager, REMLModelManager;


@protocol RERelevanceEngineProperties <REExportedInterface>
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) RERelevanceEngineConfiguration * configuration; 
@property (nonatomic,readonly) REFeatureSet * rootFeatures; 
@property (nonatomic,readonly) REFeatureSet * mlFeatures; 
@property (nonatomic,readonly) NSArray * subsystems; 
@property (nonatomic,readonly) RELiveElementCoordinator * coordinator; 
@property (nonatomic,readonly) REDataSourceManager * dataSourceManager; 
@property (nonatomic,readonly) REMLModelManager * modelManager; 
@required
-(REDataSourceManager *)dataSourceManager;
-(REMLModelManager *)modelManager;
-(NSArray *)subsystems;
-(RELiveElementCoordinator *)coordinator;
-(RERelevanceEngineConfiguration *)configuration;
-(NSString *)name;
-(REFeatureSet *)mlFeatures;
-(REFeatureSet *)rootFeatures;

@end

