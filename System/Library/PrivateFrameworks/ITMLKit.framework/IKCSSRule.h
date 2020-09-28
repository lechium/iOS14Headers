/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class IKCSSSelectorList, IKCSSDeclarationList, IKCSSMediaQuery;

@interface IKCSSRule : NSObject <NSCopying> {

	IKCSSSelectorList* _selectorList;
	IKCSSDeclarationList* _declarationList;

}

@property (nonatomic,retain) IKCSSSelectorList * selectorList;                    //@synthesize selectorList=_selectorList - In the implementation block
@property (nonatomic,retain) IKCSSDeclarationList * declarationList;              //@synthesize declarationList=_declarationList - In the implementation block
@property (nonatomic,readonly) IKCSSMediaQuery * mediaQuery; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(IKCSSMediaQuery *)mediaQuery;
-(id)description;
-(IKCSSSelectorList *)selectorList;
-(IKCSSDeclarationList *)declarationList;
-(void)setDeclarationList:(IKCSSDeclarationList *)arg1 ;
-(void)setSelectorList:(IKCSSSelectorList *)arg1 ;
@end
