// import 'package:aws_common/aws_common.dart';
// import 'package:aws_signature_v4/aws_signature_v4.dart';

// const signer = AWSSigV4Signer();
// const cred =
//     StaticCredentialsProvider(AWSCredentials("accessKeyId", "secretAccessKey"));
// const region = 'ap-south-1'; // Choose any region you'd like
// final scope =
//     AWSCredentialScope(region: region, service: AWSService.rekognition);

import 'package:aws_rekognition_api/rekognition-2016-06-27.dart';
import 'package:flutter/services.dart' show rootBundle;

void main() async {
  final service = Rekognition(
      region: 'ap-south-1',
      credentials:
          AwsClientCredentials(accessKey: "accessKey", secretKey: "secretKey"));
  //         ByteData bytes = await rootBundle.load('assets/placeholder.png');
  // service.searchFacesByImage(collectionId: "", image: Image(bytes: bytes));
}
