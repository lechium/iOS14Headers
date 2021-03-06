/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:58:36 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@protocol MTLBuffer <MTLResource>
@property (readonly) unsigned long long length; 
@required
-(void)addDebugMarker:(id)arg1 range:(NSRange)arg2;
-(void)didModifyRange:(NSRange)arg1;
-(void*)contents;
-(void)removeAllDebugMarkers;
-(unsigned long long)length;
-(id)newTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3;

@end

