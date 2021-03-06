/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/NTKFaceObserver.h>

@class NTKFace, UIImageView, UIImage, NSString, NTKFaceSnapshotCacheRequest;

@interface NTKFaceSnapshotViewController : UIViewController <NTKFaceObserver> {

	NTKFace* _face;
	UIImageView* _imageView;
	UIImage* _snapshotImage;
	NSString* _snapshotKeyOfSnapshotImage;
	NTKFaceSnapshotCacheRequest* _snapshotRequest;

}

@property (nonatomic,readonly) UIImageView * imageView;                                  //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIImage * snapshotImage;                                    //@synthesize snapshotImage=_snapshotImage - In the implementation block
@property (nonatomic,retain) NSString * snapshotKeyOfSnapshotImage;                      //@synthesize snapshotKeyOfSnapshotImage=_snapshotKeyOfSnapshotImage - In the implementation block
@property (nonatomic,retain) NTKFaceSnapshotCacheRequest * snapshotRequest;              //@synthesize snapshotRequest=_snapshotRequest - In the implementation block
@property (nonatomic,readonly) NTKFace * face;                                           //@synthesize face=_face - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NTKFace *)face;
-(void)dealloc;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)setSnapshotImage:(UIImage *)arg1 ;
-(id)initWithFace:(id)arg1 ;
-(UIImage *)snapshotImage;
-(UIImageView *)imageView;
-(NTKFaceSnapshotCacheRequest *)snapshotRequest;
-(void)faceConfigurationDidChange:(id)arg1 ;
-(void)faceResourceDirectoryDidChange:(id)arg1 ;
-(void)_attemptToFetchSnapshot;
-(void)_handleSnapshot:(id)arg1 forKey:(id)arg2 ;
-(void)setSnapshotKeyOfSnapshotImage:(NSString *)arg1 ;
-(void)_updateFaceSnapshotIfNecessaryOfFace;
-(NSString *)snapshotKeyOfSnapshotImage;
-(void)setSnapshotRequest:(NTKFaceSnapshotCacheRequest *)arg1 ;
@end

