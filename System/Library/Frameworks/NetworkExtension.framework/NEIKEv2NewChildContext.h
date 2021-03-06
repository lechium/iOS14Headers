/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NEIKEv2RequestContext.h>

@class NEIKEv2ChildSA;

@interface NEIKEv2NewChildContext : NEIKEv2RequestContext {

	NEIKEv2ChildSA* _childSA;

}

@property (nonatomic,retain) NEIKEv2ChildSA * childSA;              //@synthesize childSA=_childSA - In the implementation block
-(void)setChildSA:(NEIKEv2ChildSA *)arg1 ;
-(NEIKEv2ChildSA *)childSA;
-(id)initWithChildSA:(id)arg1 ;
-(id)description;
@end

