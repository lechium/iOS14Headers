/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MTLDepthStencilStateSPI.h>

@protocol MTLDevice;
@class NSString;

@interface _MTLDepthStencilState : NSObject <MTLDepthStencilStateSPI> {

	id<MTLDevice> _device;
	NSString* _label;

}

@property (readonly) id<MTLDevice> device;                          //@synthesize device=_device - In the implementation block
@property (readonly) NSString * label;                              //@synthesize label=_label - In the implementation block
@property (readonly) BOOL readsDepth; 
@property (readonly) BOOL writesDepth; 
@property (readonly) BOOL readsStencil; 
@property (readonly) BOOL writesStencil; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<MTLDevice>)device;
-(void)dealloc;
-(BOOL)writesStencil;
-(BOOL)writesDepth;
-(id)initWithDevice:(id)arg1 depthStencilDescriptor:(id)arg2 ;
-(BOOL)readsDepth;
-(BOOL)readsStencil;
-(NSString *)label;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(NSString *)description;
@end

