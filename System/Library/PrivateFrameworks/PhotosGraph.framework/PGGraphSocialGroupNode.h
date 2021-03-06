/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGGraphOptimizedNode.h>

@class NSNumber, NSSet, NSArray, NSString;

@interface PGGraphSocialGroupNode : PGGraphOptimizedNode {

	NSNumber* _uuid;
	float _weight;

}

@property (readonly) long long socialGroupID; 
@property (nonatomic,readonly) unsigned long long rank; 
@property (readonly) unsigned long long numberOfMomentNodes; 
@property (readonly) unsigned long long numberOfPersonNodes; 
@property (nonatomic,readonly) NSSet * momentNodes; 
@property (nonatomic,readonly) NSSet * personNodes; 
@property (nonatomic,readonly) NSArray * sortedPersonNodes; 
@property (nonatomic,readonly) NSString * socialGroupName; 
@property (nonatomic,readonly) BOOL isFrequentSocialGroup; 
+(id)weightSortDescriptors;
-(unsigned long long)rank;
-(NSSet *)personNodes;
-(unsigned long long)numberOfMomentNodes;
-(void)setWeight:(float)arg1 ;
-(void)enumeratePersonNodesUsingBlock:(/*^block*/id)arg1 ;
-(NSSet *)momentNodes;
-(unsigned long long)numberOfPersonNodes;
-(NSArray *)sortedPersonNodes;
-(BOOL)hasProperties:(id)arg1 ;
-(id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 ;
-(id)UUID;
-(NSString *)socialGroupName;
-(long long)socialGroupID;
-(void)setLocalProperties:(id)arg1 ;
-(void)enumerateMomentNodesUsingBlock:(/*^block*/id)arg1 ;
-(unsigned short)domain;
-(BOOL)isFrequentSocialGroup;
-(id)propertyDictionary;
-(id)label;
-(float)weight;
-(id)description;
-(id)initWithWeight:(float)arg1 ;
@end

