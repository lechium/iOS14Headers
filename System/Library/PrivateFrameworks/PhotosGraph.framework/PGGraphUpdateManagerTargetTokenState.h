/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PHPersistentChangeToken;

@interface PGGraphUpdateManagerTargetTokenState : NSObject {

	BOOL _encounteredTargetToken;
	PHPersistentChangeToken* _changeToken;

}

@property (nonatomic,readonly) PHPersistentChangeToken * changeToken;              //@synthesize changeToken=_changeToken - In the implementation block
@property (assign,nonatomic) BOOL encounteredTargetToken;                          //@synthesize encounteredTargetToken=_encounteredTargetToken - In the implementation block
-(PHPersistentChangeToken *)changeToken;
-(id)initWithPersistentChangeToken:(id)arg1 ;
-(BOOL)encounteredTargetToken;
-(void)setEncounteredTargetToken:(BOOL)arg1 ;
-(id)description;
@end

