/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/_MTLObjectWithLabel.h>
#import <libobjc.A.dylib/MTLCaptureScope.h>
@class NSString;


@protocol MTLCaptureScope <NSObject>
@property (copy) NSString * label; 
@property (nonatomic,readonly) id<MTLDevice> device; 
@property (nonatomic,readonly) id<MTLCommandQueue> commandQueue; 
@required
-(id<MTLDevice>)device;
-(id<MTLCommandQueue>)commandQueue;
-(void)endScope;
-(void)beginScope;
-(void)setLabel:(id)arg1;
-(NSString *)label;

@end


@protocol MTLDevice, MTLCommandQueue;
@class NSString;

@interface MTLCaptureScope : _MTLObjectWithLabel <MTLCaptureScope> {

	id<MTLDevice> _device;
	id<MTLCommandQueue> _commandQueue;

}

@property (copy) NSString * label; 
@property (nonatomic,readonly) id<MTLDevice> device;                          //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) id<MTLCommandQueue> commandQueue;              //@synthesize commandQueue=_commandQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<MTLDevice>)device;
-(id<MTLCommandQueue>)commandQueue;
-(void)dealloc;
-(void)endScope;
-(void)beginScope;
-(id)initWithDevice:(id)arg1 commandQueue:(id)arg2 ;
@end
