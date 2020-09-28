/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:26 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSDrawables.framework/TSDrawables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSDrawables/TSDrawables-Structs.h>
@class NSMutableArray, TSDBezierPath, TSDBezierNode;

@interface TSDBezierSubpath : NSObject {

	NSMutableArray* mNodes;
	BOOL mClosed;

}

@property (nonatomic,retain) NSMutableArray * nodes; 
@property (assign,getter=isClosed,nonatomic) BOOL closed; 
@property (nonatomic,readonly) BOOL isRectangular; 
@property (nonatomic,readonly) TSDBezierPath * bezierPath; 
@property (nonatomic,readonly) TSDBezierNode * firstNode; 
@property (nonatomic,readonly) TSDBezierNode * lastNode; 
@property (nonatomic,readonly) BOOL allNodesSelected; 
@property (nonatomic,readonly) BOOL hasSelectedNode; 
@property (nonatomic,readonly) BOOL canDeleteSelectedNodes; 
@property (nonatomic,readonly) CGRect nodeBounds; 
@property (nonatomic,readonly) BOOL closeIfEndpointsAreEqual; 
-(BOOL)isCircular;
-(NSMutableArray *)nodes;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isClosed;
-(void)setClosed:(BOOL)arg1 ;
-(void)dealloc;
-(void)removeNode:(id)arg1 ;
-(id)init;
-(TSDBezierNode *)lastNode;
-(TSDBezierPath *)bezierPath;
-(TSDBezierNode *)firstNode;
-(void)removeLastNode;
-(void)setNodes:(NSMutableArray *)arg1 ;
-(void)addNode:(id)arg1 ;
-(id)description;
-(void)transformUsingAffineTransform:(CGAffineTransform)arg1 ;
-(BOOL)isRectangular;
-(double)distanceToPoint:(CGPoint)arg1 elementIndex:(unsigned long long*)arg2 tValue:(double*)arg3 threshold:(double)arg4 ;
-(void)updateReflectedState;
-(void)appendToBezierPath:(id)arg1 selectedNodesOnly:(BOOL)arg2 fromIndex:(unsigned long long)arg3 ;
-(id)nodePriorToNode:(id)arg1 ;
-(id)nodeAfterNode:(id)arg1 ;
-(id)splitEdgeAtIndex:(unsigned long long)arg1 ;
-(void)appendToBezierPath:(id)arg1 ;
-(void)reverseDirection;
-(void)offsetSelectedNodesByDelta:(CGPoint)arg1 ;
-(void)offsetSelectedEdgesByDelta:(CGPoint)arg1 ;
-(BOOL)allNodesSelected;
-(BOOL)hasSelectedNode;
-(BOOL)canDeleteSelectedNodes;
-(void)deleteSelectedNodes;
-(void)selectAllNodes;
-(void)deselectAllNodes;
-(id)bezierNodeUnderPoint:(CGPoint)arg1 withTransform:(CGAffineTransform)arg2 andTolerance:(double)arg3 returningType:(long long*)arg4 ;
-(id)insertNodeAtPoint:(CGPoint)arg1 tolerance:(double)arg2 ;
-(CGRect)nodeBounds;
-(void)sharpenAllNodes;
-(void)smoothNode:(id)arg1 ;
-(BOOL)closeIfEndpointsAreEqual;
-(void)addNodesToArray:(id)arg1 ;
-(void)convertToHobby;
@end
