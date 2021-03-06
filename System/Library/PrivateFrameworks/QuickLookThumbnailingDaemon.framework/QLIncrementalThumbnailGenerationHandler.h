/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/QuickLookThumbnailingDaemon.framework/QuickLookThumbnailingDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol QLIncrementalThumbnailGenerationHandler
@required
-(void)didGenerateThumbnailForRequestWithUUID:(id)arg1 data:(id)arg2 bitmapFormat:(id)arg3 metadata:(id)arg4 contentRect:(CGRect)arg5 iconFlavor:(int)arg6 thumbnailType:(long long)arg7 clientShouldTakeOwnership:(BOOL)arg8;
-(void)failedToGenerateThumbnailOfType:(long long)arg1 forRequestWithUUID:(id)arg2 error:(id)arg3;
-(void)didUpdateStatus:(long long)arg1 ofThumbnailGenerationWithUUID:(id)arg2;

@end

