/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameplayKit/GameplayKit-Structs.h>
#import <GameplayKit/GKGraph.h>

@interface GKGridGraph : GKGraph {

	GKCGridGraph* _cGridGraph;
	BOOL _diagonalsAllowed;

}

@property (nonatomic,readonly)  gridOrigin; 
@property (nonatomic,readonly) unsigned long long gridWidth; 
@property (nonatomic,readonly) unsigned long long gridHeight; 
@property (nonatomic,readonly) BOOL diagonalsAllowed;                      //@synthesize diagonalsAllowed=_diagonalsAllowed - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)graphFromGridStartingAt:(int)arg1 width:(int)arg2 height:(BOOL)arg3 ;
+(id)graphFromGridStartingAt:(int)arg1 width:(int)arg2 height:(BOOL)arg3 diagonalsAllowed:(Class)arg4 ;
-(void)removeNodes:(id)arg1 ;
-(unsigned long long)gridHeight;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)gridWidth;
-(GKCGraph*)makeCGraph;
-(Class)classForGenericArgumentAtIndex:(unsigned long long)arg1 ;
-(id)initFromGridStartingAt:(int)arg1 width:(int)arg2 height:(BOOL)arg3 ;
-(id)initFromGridStartingAt:(int)arg1 width:(int)arg2 height:(BOOL)arg3 diagonalsAllowed:(Class)arg4 ;
-()gridOrigin;
-(GKCGridGraph*)cGridGraph;
-(id)nodeAtGridPosition:;
-(id)nodeAtGridPositionNoNilCheck:;
-(void)connectNodeToAdjacentNodes:(id)arg1 ;
-(BOOL)diagonalsAllowed;
@end

