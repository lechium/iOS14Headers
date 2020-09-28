/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGGraphHighlightNode.h>

@class PGGraphHighlightTypeNode, NSArray;

@interface PGGraphHighlightGroupNode : PGGraphHighlightNode

@property (readonly) PGGraphHighlightTypeNode * typeNode; 
@property (readonly) NSArray * highlightNodes; 
@property (readonly) NSArray * sortedHighlightNodes; 
+(id)pathFromMoment;
+(id)inclusivePathFromTargetNodeDomain:(unsigned short)arg1 withName:(id)arg2 ;
+(id)pathToMoment;
+(id)inclusivePathToTargetNodeDomain:(unsigned short)arg1 withName:(id)arg2 ;
+(id)pathToTargetNodeDomain:(unsigned short)arg1 ;
+(id)pathFromTargetNodeDomain:(unsigned short)arg1 ;
-(void)eventEnumerateMomentNodesUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)isAggregation;
-(BOOL)isPartOfTrip;
-(BOOL)isTrip;
-(BOOL)isShortTrip;
-(BOOL)isLongTrip;
-(id)momentNodes;
-(PGGraphHighlightTypeNode *)typeNode;
-(NSArray *)sortedHighlightNodes;
-(BOOL)isPartOfAggregation;
-(void)enumerateMomentNodesUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)isPartOfLongTrip;
-(void)enumerateHighlightNodesUsingBlock:(/*^block*/id)arg1 ;
-(id)label;
-(BOOL)isPartOfShortTrip;
-(NSArray *)highlightNodes;
@end
