/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol KGEdge <KGElement>
@property (nonatomic,readonly) id<KGNode> targetNode; 
@property (nonatomic,readonly) id<KGNode> sourceNode; 
@required
-(id<KGNode>)sourceNode;
-(id<KGNode>)targetNode;
-(id)initWithIdentifier:(unsigned long long)arg1 labels:(id)arg2 weight:(float)arg3 properties:(id)arg4 sourceNode:(id)arg5 targetNode:(id)arg6;
-(id)oppositeNodeFromNode:(id)arg1;

@end

