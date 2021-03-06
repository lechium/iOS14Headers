/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:23 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class LPSize;

@interface LPVideoPlayButtonStyle : NSObject {

	LPSize* _size;
	LPSize* _backgroundSize;
	double _disabledOpacity;

}

@property (nonatomic,retain) LPSize * size;                        //@synthesize size=_size - In the implementation block
@property (nonatomic,retain) LPSize * backgroundSize;              //@synthesize backgroundSize=_backgroundSize - In the implementation block
@property (assign,nonatomic) double disabledOpacity;               //@synthesize disabledOpacity=_disabledOpacity - In the implementation block
-(id)initWithPlatform:(long long)arg1 ;
-(void)setSize:(LPSize *)arg1 ;
-(double)disabledOpacity;
-(LPSize *)backgroundSize;
-(void)setBackgroundSize:(LPSize *)arg1 ;
-(void)setDisabledOpacity:(double)arg1 ;
-(LPSize *)size;
@end

