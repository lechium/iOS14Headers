/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/SXComponentDependencyDescriptor.h>

@interface SXComponentLayoutAttributeDescriptor : SXComponentDependencyDescriptor {

	BOOL _ignoreMargins;
	int _fromLayoutAttribute;
	int _toLayoutAttribute;

}

@property (assign,nonatomic) int fromLayoutAttribute;              //@synthesize fromLayoutAttribute=_fromLayoutAttribute - In the implementation block
@property (assign,nonatomic) int toLayoutAttribute;                //@synthesize toLayoutAttribute=_toLayoutAttribute - In the implementation block
@property (assign,nonatomic) BOOL ignoreMargins;                   //@synthesize ignoreMargins=_ignoreMargins - In the implementation block
+(id)descriptorWithFromLayoutAttribute:(int)arg1 toLayoutAttribute:(int)arg2 ignoreMargin:(BOOL)arg3 ;
-(int)toLayoutAttribute;
-(BOOL)ignoreMargins;
-(int)fromLayoutAttribute;
-(id)initWithFromLayoutAttribute:(int)arg1 toLayoutAttribute:(int)arg2 ignoreMargin:(BOOL)arg3 ;
-(void)setFromLayoutAttribute:(int)arg1 ;
-(void)setToLayoutAttribute:(int)arg1 ;
-(void)setIgnoreMargins:(BOOL)arg1 ;
@end

