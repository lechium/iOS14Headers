/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:25 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKActionPan.h>
#import <libobjc.A.dylib/OKActionEdgePanExports.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface OKActionEdgePan : OKActionPan <OKActionEdgePanExports, NSSecureCoding>
+(BOOL)supportsSecureCoding;
+(void)setupJavascriptContext:(id)arg1 ;
+(id)edgePanActionWithState:(unsigned long long)arg1 location:(CGPoint)arg2 touchCount:(unsigned long long)arg3 translation:(CGPoint)arg4 previousTranslation:(CGPoint)arg5 velocity:(CGPoint)arg6 previousVelocity:(CGPoint)arg7 direction:(unsigned long long)arg8 context:(id)arg9 ;
-(void)dealloc;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
